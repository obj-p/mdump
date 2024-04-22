#import "MDProxy.h"

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@implementation MDProxy

+ (BOOL)respondsToSelector:(SEL)aSelector
{
    return class_respondsToSelector(self.targetClass, aSelector);
}

+ (Class)targetClass
{
    return Nil;
}

- (void)forwardInvocation:(NSInvocation *)invocation
{
    [invocation setTarget:_target];
    [invocation invoke];
}

- (instancetype)initWithTarget:(NSObject *)target
{
    NSParameterAssert([target isKindOfClass:self.class.targetClass]);
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
