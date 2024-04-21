#import <MDCoreSimulator/MDSimDeviceTypeProxy.h>
#import <MDFramework/Macros.h>
#import <objc/runtime.h>

MD_IGNORED_PROTOCOL_BEGIN
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
MD_IGNORED_PROTOCOL_END
