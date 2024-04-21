@import Foundation;

#import <MDFramework/MDProxy.h>

@implementation MDProxy

- (void)forwardInvocation:(NSInvocation *)invocation
{
    [invocation setTarget:_target];
    [invocation invoke];
}

- (instancetype)initWithTarget:(NSObject *)target
{
    _target = target;
    return self;
}

- (NSMethodSignature *)methodSignatureForSelector:(SEL)aSelector
{
    return [_target methodSignatureForSelector:aSelector];
}

- (BOOL)respondsToSelector:(SEL)aSelector
{
    return [_target respondsToSelector:aSelector];
}

@end
