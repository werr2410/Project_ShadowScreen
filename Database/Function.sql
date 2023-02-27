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

-- CPU
go create function getCPUId(@manufacture nvarchar(100), @name nvarchar(100), @Stars int, @IsSale bit) 
returns int as begin -- s
	declare @id int = -1

	if exists(select CPUId from CPU 
			 where Manufacturer = @manufacture and @name = [Name]
				   and @Stars =  Stars and @isSale = IsSale) begin

		select @id = CPUId from CPU 
		where Manufacturer = @manufacture and @name = [Name]
			  and @Stars =  Stars and @isSale = IsSale

	end 

	return @id
end

go create function CPUToString(@id int) returns nvarchar(400) as begin -- s
	declare @string nvarchar(500) = ''

	if exists(select CPUId from CPU where CPUId = @id) begin 
		select @string = (Manufacturer + '  ' + [Name] + ' ' + [Description] + ' ' + CAST(Stars as nvarchar(20)))
		from CPU
		where CPUId = @id
	end else begin 
		set @string = 'cpu dont found'
	end

	return @string
end

-- GPU

go create function getGPUId(@Manufacturer nvarchar(200), @description nvarchar(200), @isSale bit, @Stars int) -- s
returns int as begin
	declare @id int = -1

	if exists(select GPUId 
			  from GPU 
			  where Manufacturer = @manufacturer and [Description] = @description
					and IsSale = @isSale and @Stars = Stars) begin

		select @id = GPUId 
		from GPU
		where Manufacturer = @manufacturer and [Description] = @description
					and IsSale = @isSale and @Stars = Stars 
	end

	return @id
end

go create function GPUToStringById(@Id int) -- s
returns nvarchar(500) as begin
	declare @string nvarchar(500) = ''

	if exists(select GPUId from GPU where GPUId = @id) begin 
		select @string = (Manufacturer + ' ' + [Description] + ' ' + CAST(Stars as nvarchar(20)))
		from GPU
		where GPUId = @id
	end else begin 
		set @string = 'cpu dont found'
	end

	return @string
end

-- Baseboard

go create function getBaseboardId(@Manufacturer nvarchar(200), @Product nvarchar(100), @description nvarchar(200), @isSale bit, @Stars int) -- s
returns int as begin
	declare @id int = -1

	if exists(select BaseboardId 
			  from Baseboard 
			  where Manufacturer = @manufacturer and Product = @Product and [Description] = @description
					and IsSale = @isSale and @Stars = Stars) begin

		select @id = BaseboardId 
		from Baseboard
		where Manufacturer = @manufacturer and [Description] = @description and Product = @Product
					and IsSale = @isSale and @Stars = Stars 
	end

	return @id
end

go create function BaseboardToStringById(@Id int) -- s
returns nvarchar(500) as begin
	declare @string nvarchar(500) = ''

	if exists(select BaseboardId from Baseboard where BaseboardId = @id) begin 
		select @string = (Manufacturer + ' ' +  Product + ' ' + [Description] + ' ' + CAST(Stars as nvarchar(20)))
		from Baseboard
		where BaseboardId = @id
	end else begin 
		set @string = 'cpu dont found'
	end

	return @string
end

-- Memorychip

go create function getMemorychipdId(@Manufacturer nvarchar(200), @Capacity nvarchar(300), @description nvarchar(200), @isSale bit, @Stars int) -- s
returns int as begin
	declare @id int = -1

	if exists(select MemorychipId 
			  from Memorychip 
			  where Manufacturer = @manufacturer and Capacity = @Capacity and [Description] = @description
					and IsSale = @isSale and @Stars = Stars) begin

		select @id = MemorychipId 
		from Memorychip
		where Manufacturer = @manufacturer and [Description] = @description and Capacity = @Capacity
					and IsSale = @isSale and @Stars = Stars 
	end

	return @id
end

go create function MemorychipToStringById(@Id int) -- s
returns nvarchar(500) as begin
	declare @string nvarchar(500) = ''

	if exists(select MemorychipId from Memorychip where MemorychipId = @id) begin 
		select @string = (Manufacturer + ' ' +  Capacity + ' ' + [Description] + ' ' + CAST(Stars as nvarchar(20)))
		from Memorychip
		where MemorychipId = @id
	end else begin 
		set @string = 'cpu dont found'
	end

	return @string
end

-- Storage

go create function getStoragedId(@Manufacturer nvarchar(400),@model nvarchar(400) , @Size nvarchar(200), @description nvarchar(200), @isSale bit, @Stars int) -- s
returns int as begin
	declare @id int = -1

	if exists(select StorageId 
			  from Storage 
			  where Manufacturer = @manufacturer and Model = @model and Size = @Size and [Description] = @description
					and IsSale = @isSale and @Stars = Stars) begin

		select @id = StorageId 
		from Storage
		where Manufacturer = @manufacturer and Model = @model and Size = @Size and [Description] = @description
					and IsSale = @isSale and @Stars = Stars
	end

	return @id
end

go create function StorageToStringById(@Id int) -- s
returns nvarchar(500) as begin
	declare @string nvarchar(500) = ''

	if exists(select StorageId from Storage where StorageId = @id) begin 
		select @string = (Manufacturer + ' ' +  Model + ' ' + Size + ' ' + [Description] + ' ' + CAST(Stars as nvarchar(20)))
		from Storage
		where StorageId = @id
	end else begin 
		set @string = 'cpu dont found'
	end

	return @string
end

-- computer 

go create function getComputerId(@Title nvarchar(50), @CPU int, @GPU int,
								 @Storage int, @Memorychip int, @Baseboard int)
returns int as begin
	declare @id int = 0

	if exists(select ComputerId from Computer
			  where @Title = Title and @CPU = CPUId and @GPU = GPUId	
					and @Memorychip = MemorychipId and @Storage = StorageId
					and @Baseboard = BaseboardId) begin
		select @id = ComputerId from Computer
		where @Title = Title and @CPU = CPUId and @GPU = GPUId	
			  and @Memorychip = MemorychipId and @Storage = StorageId
			  and @Baseboard = BaseboardId
	end					

	return @id
end

-- chat and message

go create function getIdChat(@usernamesender int, @usernameorder int) 
returns int as begin 
	declare @id int = -1

	if exists(select ChatId from Chat where UsernameOrderId  = UsernameOrderId and UsernameSenderId = @usernamesender) begin
		select @id = ChatId from Chat where UsernameOrderId  = UsernameOrderId and UsernameSenderId = @usernamesender
	end

	return @id
end

go create function getIdMessage(@datetime datetime) returns int as begin
	declare @id int = -1

	if exists(select MessageId from [Message] where [Datetime] = @datetime) begin
		select @id = MessageId from [Message] where [Datetime] = @datetime
	end

	return @id
end