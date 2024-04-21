#import <Foundation/Foundation.h>

#define MD_PROXY_PROTOCOL(protocol) MDProxy<NSObject <protocol> *> <protocol>

NS_ASSUME_NONNULL_BEGIN
@interface MDProxy<Target: NSObject *> : NSProxy

@property (readonly, nonatomic) Target target;

- (instancetype)initWithTarget:(Target)target;

@end
NS_ASSUME_NONNULL_END
