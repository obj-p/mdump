#import "MDSimProfileBundle.h"

#import <objc/runtime.h>

MD_IGNORED_PROTOCOL_BEGIN
@implementation MDSimProfileBundle

@dynamic localInfoDictionary, infoPlistPath;

- (instancetype)initWithPath:(NSString *)path error:(NSError **)error
{
    Class klass = objc_lookUpClass("SimProfileBundle");
    id target = [[klass alloc] initWithPath:path error:error];
    
    if (target == NULL) {
        return NULL;
    }
    
    return [super initWithTarget:target];
}

@end
MD_IGNORED_PROTOCOL_END
