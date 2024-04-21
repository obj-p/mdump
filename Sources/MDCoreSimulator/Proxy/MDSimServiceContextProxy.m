#import <MDCoreSimulator/MDSimDeviceTypeProxy.h>
#import <MDCoreSimulator/MDSimServiceContextProxy.h>
#import <MDFramework/Macros.h>
#import <objc/runtime.h>

MD_IGNORED_PROTOCOL_BEGIN
@implementation MDSimServiceContextProxy

@dynamic supportedDeviceTypes;

+ (instancetype)sharedServiceContextForDeveloperDir:(NSString *)dir error:(NSError **)error {
    Class klass = objc_lookUpClass("SimServiceContext");
    id target = [klass sharedServiceContextForDeveloperDir:dir error:error];
    
    if (target == NULL) {
        return NULL;
    }
    
    return [[MDSimServiceContextProxy alloc] initWithTarget:target];
}

@end
MD_IGNORED_PROTOCOL_END
