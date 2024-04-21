@import ObjectiveC;
@import MDFramework;

#import <MDCoreSimulator/MDSimDeviceTypeProxy.h>

@implementation MDSimDeviceTypeProxy

@dynamic bundle, modelIdentifier;

- (instancetype)initWithBundle:(NSBundle *)bundle error:(NSError **)error
{
    Class klass = objc_lookUpClass("SimDeviceType");
    id target = [[klass alloc] initWithBundle:bundle error:error];
    
    if (target == NULL) {
        return NULL;
    }
    
    return [super initWithTarget:target];
}

@end


