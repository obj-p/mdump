#import <MDCoreSimulator/MDCoreSimulator.h>

#import <CoreSimulator/SimDeviceType.h>
#import <objc/runtime.h>

@implementation SimDeviceType (Foobar)
@end

@implementation MDCoreSimulator

+ (NSString *)bundlePath {
    return @"/Library/Developer/PrivateFrameworks/CoreSimulator.framework";
}

+ (id)foobar {
    Class serviceContextClass = objc_lookUpClass("SimServiceContext");
    Class simDeviceType = objc_lookUpClass("SimDeviceType");
    SimDeviceType *foobar = [[simDeviceType alloc] init];
    
    NSLog(@"%@", [foobar bundlePath]);
    
    int numClasses;
    Class *classes = NULL;
     
    classes = NULL;
    numClasses = objc_getClassList(NULL, 0);
     
    if (numClasses > 0 )
    {
        classes = (__unsafe_unretained Class *)malloc(sizeof(Class) * numClasses);
        numClasses = objc_getClassList(classes, numClasses);
        free(classes);
    }

    return NULL;
}

@end
