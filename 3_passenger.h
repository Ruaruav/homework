

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject
@property (nonatomic, copy) Person *name;
@property (nonatomic, copy) NSNumber *number;
@property (nonatomic, copy) bool * used;
-(void)use:(bool *)ifuse;
@end

@interface Passenger : Person
@property (nonatomic, copy) bool *is_18;
@property (nonatomic, copy) NSMutableArray *History_orders;
@property (nonatomic, copy) NSMutableArray *No_travel_orders;

-(void)booking_person:(Person *)you order_number:(NSNumber *)number; 
-(void)checking_person:(Person *)you order_number:(NSNumber *)number;
// @property 属性
// 是否年满 18 岁
// 历史订单 （数组）
// 未出行订单 （数组）

// Function 方法
// 去订票

// 去检票
@end

NS_ASSUME_NONNULL_END







