use ShadowScreen

-- Adress

go create proc addAdress 
@Country nvarchar(30), 
@Town nvarchar(30), 
@Street nvarchar(30), 
@Number nvarchar(30) 
as  
	INSERT into Adress values(@Country, @Town, @Street, @Number)

go create proc addAdressWithoutCountry
@Town nvarchar(30), 
@Street nvarchar(30), 
@Number nvarchar(30) 
as  
	INSERT into Adress values(NULL, @Town, @Street, @Number)

go create proc delAdressById
@id int as
	delete from Adress where Adress.AdressId = @id

-- Bankcard 
go create proc addBankcard 
@number nvarchar(16),
@date date,
@title nvarchar(20) = NULL as begin
	if len(@number) = 16 begin
		insert into Bankcard values ( @title, @number, @date)
	end else begin 
		print 'len @number != 16: erorr'
	end
end

go create proc delBankCardById
@id int as
	delete from Bankcard where Bankcard.BankcardId = @id

-- Reviews

go create proc addReviews
@description nvarchar(200),
@mark int as begin 
	if @mark between 0 and 10 begin
		insert into Reviews values (@description, @mark)
	end else begin
		print 'mark not between 0 and 10: erorr'
	end
end

go create proc delReviewsById
@id int as
	delete from Reviews where Reviews.ReviewsId = @id


-- Delivery
go create proc addDelivery
@type nvarchar(1),
@AdressId int,
@title nvarchar(20) = NULL as begin 
	if exists(select AdressId from Adress where AdressId = @AdressId) begin
		if @type = 'm' or @type = 'u' or @type = 'n' begin
			insert into Delivery values (@title, @type, @AdressId)
		end else begin
			print 'Type not exists: erorr'
		end
	end else begin
		print 'Adress no exists: erorr'
	end
end

go create proc delDeliveryById
@id int as 
	delete from Delivery where DeliveryId = @id