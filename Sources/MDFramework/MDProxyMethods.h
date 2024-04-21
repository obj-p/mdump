#define MD_PROXY_METHODS(target)                                 \
- (void)forwardInvocation:(NSInvocation *)invocation             \
{                                                                \
    [invocation setTarget:target];                               \
    [invocation invoke];                                         \
}                                                                \
                                                                 \
- (BOOL)respondsToSelector:(SEL)aSelector {                      \
    return [target respondsToSelector:aSelector];                \
}                                                                \
                                                                 \
- (NSMethodSignature *)methodSignatureForSelector:(SEL)aSelector \
{                                                                \
    return [target methodSignatureForSelector:aSelector];        \
}
