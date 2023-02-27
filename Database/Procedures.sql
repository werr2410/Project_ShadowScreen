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


select * from CPU
-- CPU
go create proc addCPU
@manufacturer nvarchar(100),
@name nvarchar(100) as
	insert into CPU values (@manufacturer, @name, NULL, NULL, NULL, NULL, NULL)

go create proc AddFullCPU
@manufacturer nvarchar(100),
@name nvarchar(100),
@description nvarchar(200),
@IsSale bit,
@Image varbinary(MAX),
@Stars int,
@Status nvarchar(30) as 
	insert into CPU values(@manufacturer, @name, @description, @IsSale, @Image, @Stars, @Status)

go create proc delCPUById
@id int as 
	delete from CPU where CPUId = @id

-- GPU

select * from GPU

go create proc AddGPU -- s
@manufacturer nvarchar(200) as
	insert into GPU values (@manufacturer, NULL, NULL, NULL, NULL, NULL)

go create proc addFullGPU --s
@manufacturer nvarchar(200),
@description nvarchar(200),
@isSale bit,
@image varbinary(MAX),
@Stars int,
@Status nvarchar(30) as 
	insert into GPU values (@manufacturer, @description, @isSale, @image, @Stars, @Status)

go create proc delGPUById -- s
@id int as
	delete from GPU where GPUId = @id

-- Storage

select * from Storage

go create proc addStorage --  s 
@manufacturer nvarchar(400),
@model nvarchar(400),
@size nvarchar(200) as
	insert into Storage values (@manufacturer, @model, @size, NULL, NULL, NULL, NULL, NULL)

go create proc addFullStorage -- s
@manufacturer nvarchar(400),
@model nvarchar(400),
@size nvarchar(200),
@description nvarchar(200),
@isSale bit,
@image varbinary(MAX),
@Stars int,
@Status nvarchar(30) as 
	insert into Storage values (@manufacturer, @model, @size, @description, @isSale, @image, @Stars, @Status)

go create proc delStorageById --  s
@id int as
	delete from Storage where StorageId = @id

-- Memorychip

go create proc AddMemorychip -- s
@manufacturer nvarchar(300),
@capacity nvarchar(300) as
	insert into Memorychip values (@manufacturer, @capacity, NULL, NULL, NULL, NULL, NULL)

go create proc AddFullMemorychip -- s
@manufacturer nvarchar(300),
@capacity nvarchar(300),
@description nvarchar(200),
@isSale  bit,
@image varbinary(MAX),
@Stars int,
@Status nvarchar(30) as
	insert into Memorychip values (@manufacturer, @capacity, @description, @isSale, @image, @Stars, @Status)

go create proc delMemorychipById --  s
@id int as
	delete from Memorychip where MemorychipId  = @id

-- Baseboard
go create proc addBaseboard -- s
@manufacturer nvarchar(100),
@product nvarchar(100) as
	insert into Baseboard values (@manufacturer, @product, NULL, NULL, NULL, NULL, NULL)

go create proc addFullBaseboard -- s
@manufacturer nvarchar(100),
@product nvarchar(100),
@description nvarchar(100),
@isSale bit,
@image varbinary(MAX),
@Stars int,
@Status nvarchar(30) as
	insert into Baseboard values (@manufacturer,  @product, @description, @isSale, @image, @Stars, @Status)

go create proc delBaseboard -- s
@id int as
	delete from Baseboard where BaseboardId = @id


-- computer

go create proc addComputer
@Title nvarchar(50) = NULL,
@CPUId int,
@GPUId int,
@StorageId int,
@MemorychipId int,
@BaseboardId int as begin
	if exists(select CPUId from CPU where CPUId = @CPUId) and
	   exists(select GPUId from GPU where GPUId = @GPUId) and
	   exists(select StorageId from Storage where StorageId = @StorageId) and
	   exists(select MemorychipId from Memorychip where MemorychipId = @MemorychipId) and
	   exists(select BaseboardId from Baseboard where BaseboardId = @BaseboardId) begin

	   insert into Computer values (@Title, @CPUId, @GPUId, @StorageId, @MemorychipId, @BaseboardId)

	end else begin

		print 'someone id detail not found'
	
	end
end

go create proc delComputer
@id int as
	delete from Computer where ComputerId = @id

-- Chat and message  

select * from [Message]

go create proc addChat
@userSenderId int,
@userOrderId int as begin
	if @userSenderId = @userOrderId begin
		print 'chat dont creating'
	end else begin 
		insert into Chat values (@userSenderId, @userOrderId)
	end
end

go create proc addMessageToChat
@id int,
@MessageData nvarchar(100),
@IsSender bit,
@IsViewed bit as begin
	if exists(select ChatId from Chat where ChatId = @id) begin
		insert into [Message] values (@MessageData, getdate(), @IsSender, @IsViewed, @id)
	end else begin
		print 'message dont publicate'
	end
end

