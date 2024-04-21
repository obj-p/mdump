@import ObjectiveC;
@import MDFramework;

#import <MDCoreSimulator/MDSimDeviceTypeProxy.h>

@interface MDSimDeviceTypeProxy ()

@property (nonatomic) NSObject <SimDeviceTypeProtocol> *target;

@end


@implementation MDSimDeviceTypeProxy

@dynamic bundle, modelIdentifier;

MD_PROXY_METHODS(_target)

- (instancetype)initWithBundle:(NSBundle *)bundle error:(NSError **)error
{
    Class klass = objc_lookUpClass("SimDeviceType");
    _target = [[klass alloc] initWithBundle:bundle error:error];
    
    if (_target == NULL) {
        return NULL;
    }
    
    return self;
}

- (instancetype)initWithTarget:(NSObject<SimDeviceTypeProtocol> *)target
{
    _target = target;
    return self;
}

@end


