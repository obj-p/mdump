@import ObjectiveC;

#import <MDCoreSimulator/MDSimDeviceType.h>

@interface MDSimDeviceType ()

@property (nonatomic) id simDeviceType;

@end


@implementation MDSimDeviceType

@dynamic bundle, modelIdentifier;

+ (BOOL)resolveInstanceMethod:(SEL)aSEL
{
    return YES;
}

- (void)forwardInvocation:(NSInvocation *)invocation
{
    [invocation setTarget:_simDeviceType];
    [invocation invoke];
}

- (BOOL)respondsToSelector:(SEL)aSelector {
    return [_simDeviceType respondsToSelector:aSelector];
}

- (NSMethodSignature *)methodSignatureForSelector:(SEL)sel 
{
    return [_simDeviceType methodSignatureForSelector:sel];
}

- (instancetype)init
{
    Class klass = objc_lookUpClass("SimDeviceType");
    _simDeviceType = [[klass alloc] init];
//    NSParameterAssert(self.simDeviceType)
    return self;
}

@end
