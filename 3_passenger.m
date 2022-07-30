
#import "Passenger.h"


@implementation Orders
-(void)use:(bool *)ifuse
{
	used = ifuse;
}
-(void)who:(Person *)you number:(NSNumber *)order_number
{
	name = you;
	number = order_number;
	[use ifuse:NO];
}
@end

@implementation Passenger
-(void)booking_person:(Person *)you order_number:(NSNumber *)number
{
	if(you.age >= 18)
	{
		Orders * now;
		[now who:you order_number: number];
		[No_travel_orders addObject: now];
		[History_orders addObject: now];

	}
	else
		NSLog(@"ERROR");

}
-(void)checking_person:(Person *)you order_number:(NSNumber *)number
{
	[No_travel_orders removeObjectAtIndex:0];
}
@end
