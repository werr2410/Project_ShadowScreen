use ShadowScreen

-- Adress
go create function getAdressId(@Country nvarchar(30)= NULL, @Town nvarchar(30), @Street nvarchar(30), @Number nvarchar(30))
returns int as begin
	
	declare @id int = -1

	select @id = AdressId
	from dbo.Adress
	where Country = @Country and @Town = Town and @Street = Street and @Number = NumberHouse

	return @id
end

go create function AdressToString(@id int) returns nvarchar(124) as begin 
	declare @string nvarchar(124) = ''

	if exists(select AdressId from Adress where AdressId = @id) begin
		select @string = (isnull(Country, '') + ' ' + Town + ' ' + Street + ' ' + NumberHouse) from Adress where AdressId = @id
	end else begin
		set @string = 'Adress dont found: erorr'
	end

	return @string;
end

-- Reviews

select * from Reviews

go create function getReviws(@Description nvarchar(300), @mark int) returns int as begin
	declare @id int = -1

	select @id = ReviewsId
	from Reviews
	where [Description] = @Description and @mark = Mark

	return @id
end

go create function ReviewToString(@id int) returns nvarchar(310) as begin
	declare @string nvarchar(310) = ''

	if exists(select ReviewsId from Reviews where ReviewsId = @id) begin
		select @string = ('"' + [Description]  + '":  ' + Mark) from Reviews where ReviewsId = @id
	end else begin
		set @string = 'not found Reviews: erorr'
	end

	return @string
end

-- Bankcard

go create function getBankcardId(@number nvarchar(10), @date date, @title nvarchar(20) = NULL) returns int begin
	declare @id int = -1

	select @id = BankcardId
	from Bankcard
	where @number = Number and @date = ExpirationDate and Title = @title

	return @id
end

go create function BankcardToString(@id int) returns nvarchar(60) as begin 
	declare @string nvarchar(60) = ''

	if exists(select BankcardId from Bankcard where BankcardId = @id) begin 
		select @string = (Number + ' ' + cast(ExpirationDate as nvarchar(11)) + ' ' + isnull(title, ''))
		from Bankcard
		where BankcardId = @id
	end else begin
		set @string = 'Bankcard not found'
	end

	return @string
end

-- Delivery

select * from Delivery

go create function getDeliveryId(@Type nvarchar(1), @AdressId int, @Title nvarchar(20)) returns int as begin 
	declare @id int = -1

	if @Type = 'm' or @Type = 'u' or @Type = 'n' begin
		select @id = DeliveryId 
		from Delivery
		where @Title = Title and @Type = [Type] and @AdressId = AdressId
	end 

	return @id
end

select * from Delivery

go create function DeliveryToString(@id int) returns nvarchar(200) as begin
	declare @string nvarchar(200) = ''

	if exists(select DeliveryId from Delivery where DeliveryId = @id) begin
		select @string = (isnull(Title, '') + ' ' + Type + ' ' + AdressId)
		from Delivery
		where DeliveryId = @id
	end else begin
		set @string = 'delivery dont found: erorr'
	end

	return @string
end