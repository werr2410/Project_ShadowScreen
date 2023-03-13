use ShadowScreen

go create proc SmartAddAdress -- s
@Country nvarchar(100),
@Town nvarchar(100),
@Street nvarchar(100),
@Number nvarchar(100),
@id int as begin 
	if exists(select AdressId from Adress where AdressId = @id) begin
		update Adress
		set Country = @Country, Town = @Town, Street = @Street, NumberHouse = @Number
		where AdressId = @id
	end else begin
		insert into Adress values(@Country, @Town, @Street, @Number)
	end
end

go create proc SmartAddDelivery
@Title nvarchar(100),
@Type nvarchar(1),
@AdressId int,
@DeliveryId int as begin
	if exists(select DeliveryId from Delivery where DeliveryId = @DeliveryId) begin
		update Delivery set
		Title = @Title,
		[Type] = @Type,
		AdressId = @AdressId
		where AdressId = @AdressId
	end else begin 
		insert into Delivery values (@Title, @Type, @AdressId)
	end
end

go create proc SmartAddReview 
@Description nvarchar(300),
@mark int,
@id int as begin
	if exists(select ReviewsId from Reviews  where ReviewsId = @id) begin
		update Reviews set
		[Description] = @Description,
		Mark = @mark
		where ReviewsId = @id
	end else begin
		insert into Reviews values (@Description, @mark)
	end
end

go create proc SmartAddTelegram 
@Username nvarchar(40),
@ChatId nvarchar(30),
@Usercode nvarchar(30),
@id int as begin
	if exists(select TelegramId from Telegram where TelegramId = @id) begin
		update Telegram set
		UserName = @Username,
		ChatId = @ChatId,
		Usercode = @Usercode
		where TelegramId = @id
	end else begin 
		insert into Telegram values (@Username, @ChatId, @Usercode)
	end
end

go create proc SmartAddStorage
@Manufacturer nvarchar(400),
@Model nvarchar(400),
@Size nvarchar(200),
@Description nvarchar(200),
@IsSale bit,
@Image varbinary(MAX),
@Stars int,
@Status nvarchar(30),
@id int as begin 
	if exists(select StorageId from Storage where StorageId = @id) begin
		update Storage set
		Manufacturer = @Manufacturer,
		Model = @Model,
		Size = @Size,
		[Description] = @Description,
		IsSale = @IsSale,
		[Image] = @Image,
		Stars = @Stars,
		[Status] = @Status
		where StorageId = @id
	end else begin 
		insert into Storage values (@Manufacturer, @Model, @Size, @Description, @IsSale, @Image, @Stars, @Status)
	end
end

go create proc SmartAddMemorychip
@Manufacturer nvarchar(300),
@Capacity nvarchar(300),
@Description nvarchar(200),
@IsSale bit,
@Image varbinary(MAX),
@Stars int,
@Status nvarchar(30),
@id int as begin 
	if exists(select MemorychipId from Memorychip where MemorychipId = @id) begin
		update Memorychip set
		Manufacturer = @Manufacturer,
		Capacity = @Capacity,
		[Description] = @Description,
		IsSale = @IsSale,
		[Image] = @Image,
		Stars = @Stars,
		[Status] = @Status
		where MemorychipId = @id
	end else begin 
		insert into Memorychip values (@Manufacturer, @Capacity, @Description, @IsSale, @Image, @Stars, @Status)
	end
end

go create proc SmartAddGPU
@Manufacturer nvarchar(400),
@Description nvarchar(200),
@IsSale bit,
@Image varbinary(MAX),
@Stars int,
@Status nvarchar(30),
@id int as begin 
	if exists(select GPUId from GPU where GPUId = @id) begin
		update GPU set
		Manufacturer = @Manufacturer,
		[Description] = @Description,
		IsSale = @IsSale,
		[Image] = @Image,
		Stars = @Stars,
		[Status] = @Status
		where GPUId = @id
	end else begin 
		insert into GPU values (@Manufacturer, @Description, @IsSale, @Image, @Stars, @Status)
	end
end

go create proc SmartAddCPU
@Manufacturer nvarchar(100),
@Name nvarchar(100),
@Description nvarchar(200),
@IsSale bit,
@Image varbinary(MAX),
@Stars int,
@Status nvarchar(30),
@id int as begin 
	if exists(select CPUId from CPU where CPUId = @id) begin
		update CPU set
		Manufacturer = @Manufacturer,
		[Name] = @Name,
		[Description] = @Description,
		IsSale = @IsSale,
		[Image] = @Image,
		Stars = @Stars,
		[Status] = @Status
		where CPUId = @id
	end else begin 
		insert into CPU values (@Manufacturer, @Name, @Description, @IsSale, @Image, @Stars, @Status)
	end
end

go create proc SmartAddBaseboard
@Manufacturer nvarchar(100),
@Product nvarchar(100),
@Description nvarchar(200),
@IsSale bit,
@Image varbinary(MAX),
@Stars int,
@Status nvarchar(30),
@id int as begin 
	if exists(select BaseboardId from Baseboard where BaseboardId = @id) begin
		update Baseboard set
		Manufacturer = @Manufacturer,
		Product = @Product,
		[Description] = @Description,
		IsSale = @IsSale,
		[Image] = @Image,
		Stars = @Stars,
		[Status] = @Status
		where BaseboardId = @id
	end else begin 
		insert into Baseboard values (@Manufacturer, @Product, @Description, @IsSale, @Image, @Stars, @Status)
	end
end

go create proc SmartAddComputer 
@Title nvarchar(50) = 'unknown',
@CPUId int,
@GPUId int,
@StorageId int,
@MemorychipId int,
@BaseboardId int,
@ComputerId  int as begin 	
	if exists(select ComputerId from Computer where ComputerId = @ComputerId) begin
		update Computer set
		Title = @Title,
		CPUId = @CPUId,
		GPUId = @GPUId,
		StorageId =@StorageId,
		MemorychipId = @MemorychipId,
		BaseboardId = @BaseboardId
		where ComputerId = @ComputerId
	end else begin 
		insert into Computer values (@Title, @CPUId, @GPUId, @StorageId, @MemorychipId, @BaseboardId)
	end
end

go create proc SmartAddMessage 
@MessageData nvarchar(100),
@DateTime datetime,
@IsSender bit,
@IsViewed bit,
@ChatId int,
@MessageId int as begin
	if exists(select MessageId from [Message] where MessageId = @MessageId) begin
		update [Message] set
		MessageData = @MessageData,
		[Datetime] = @DateTime,
		IsSender = @IsSender,
		IsViewed = @IsViewed,
		ChatId = @ChatId
		where MessageId = @MessageId
	end else begin
		insert into [Message] values (@MessageData, @DateTime, @IsSender, @IsViewed, @ChatId)
	end
end

go create proc SmartAddChat
@UsernameSender int,
@UsernameOrder int,
@id int as begin
	if exists(select ChatId from Chat where ChatId = @id) begin
		update Chat set
		UsernameSenderId = @UsernameSender,
		UsernameOrderId = @UsernameOrder
		where ChatId = @id
	end else begin
		insert into Chat values (@UsernameSender, @UsernameOrder)
	end
end

go create proc SmartAddBankcard
@Title nvarchar(20),
@Number nvarchar(16),
@Date date,
@id int as begin
	if exists(select BankcardId from Bankcard where BankcardId = @id) begin
		update Bankcard set
		Title = @Title,
		Number = @Number,
		ExpirationDate = @Date
		where BankcardId = @id
	end else begin
		insert into Bankcard values (@Title, @Number, @Date)
	end
end

-- FK,

go create proc SmartAddUser 
@Username nvarchar(100),
@Name nvarchar(40),
@Surname nvarchar(40),
@Middlename nvarchar(40),
@Numberphone nvarchar(12),
@Birthday date,
@StartUse datetime,
@Hashcode nvarchar(100),
@Email nvarchar(41),
@Passport nvarchar(40),
@ComputerId int,
@TelegramId int,
@AdressId int,
@id int as begin 
	if exists(select UserId from [User] where UserId = @id) begin
		update [User] set
		Username = @Username,
		[Name] = @Name,
		Surname = @Surname,
		Middlename = @Middlename,
		Numberphone = @Numberphone,
		Birthday = @Birthday,
		StartUse = @StartUse,
		HashCode = @Hashcode,
		Email = @Email,
		Passport = @Passport,
		ComputerId = @ComputerId,
		TelegramId = @TelegramId,
		AdressId = @AdressId
		where UserId = @id
	end else begin
		insert into [User] values
			(@Username, @Name, @Surname, @Middlename,@Numberphone, @Birthday, @StartUse, @Hashcode,@Email,  @Passport, @ComputerId, @TelegramId, @AdressId)
	end
end