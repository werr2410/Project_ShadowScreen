use ShadowScreen

select * from Telegram

exec SmartAddTelegram 'Anr1esss', '324214324', '2342354132', 3

select Username, ChatId, Usercode from Telegram where TelegramId = 1

exec SmartAddGPU 'manufacturer', 'desc', 0, NuLL, 0, NULL, 98073425 

select * from GPU

select GPUId from GPU where Manufacturer = 'manufacturer' and [Description] = 'desc' and IsSale = 0 and Stars = 0 

select Manufacturer, [Description], IsSale, [Image], Stars, [Status] from GPU where GPUId = 1

go create function getAdressIdTable(
	@Country nvarchar(30),
	@Town nvarchar(30),
	@Street nvarchar(30),
	@Number nvarchar(30)
	) returns table as 

	return (
		select AdressId
		from dbo.Adress
		where Country = @Country and @Town = Town and @Street = Street and @Number = NumberHouse
			)

go create function getReviwsIdTable(
	@Description nvarchar(300),
	@mark int
	) 
	
	returns table as return (
		select ReviewsId
		from Reviews
		where [Description] = @Description and @mark = Mark
	)

	select BankcardId from getBankcardIdTable('1234123412341234', '2023-03-30', NULL)

go create function getBankcardIdTable(
	@number nvarchar(16),
	@date date,
	@title nvarchar(20) = NULL
	) 
		returns table as return 
	(
		select BankcardId
		from Bankcard
		where Number = @number and  ExpirationDate = @date  and Title = @title
	)

go create function getDeliveryIdTable(
	@Type nvarchar(1),
	@AdressId int,
	@Title nvarchar(20)
	) returns table as
		return (
			select DeliveryId 
			from Delivery
			where @Title = Title and @Type = [Type] and @AdressId = AdressId
		)

