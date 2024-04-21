@import Foundation;

NS_ASSUME_NONNULL_BEGIN
@interface MDProxy<Target: NSObject *> : NSProxy

@property (readonly, nonatomic) Target target;

- (instancetype)initWithTarget:(Target)target;

@end
NS_ASSUME_NONNULL_END
