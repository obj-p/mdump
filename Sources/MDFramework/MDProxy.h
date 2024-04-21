#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface MDProxy : NSProxy

@property (readonly, nonatomic) NSObject *target;

- (instancetype)initWithTarget:(NSObject *)target;

@end
NS_ASSUME_NONNULL_END
