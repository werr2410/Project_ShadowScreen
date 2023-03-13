use ShadowScreen

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

go create function getBankcardIdTable(
	@number nvarchar(10),
	@date date,
	@title nvarchar(20) = NULL
	) 
		returns table as return 
	(
		select BankcardId
		from Bankcard
		where @number = Number and @date = ExpirationDate and Title = @title
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

