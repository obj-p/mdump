#import <MDFramework/MDFramework.h>

#import <MDCoreSimulator/MDSimDeviceType.h>
#import <MDCoreSimulator/MDSimServiceContext.h>
#import <MDCoreSimulator/MDSimProfileBundle.h>

@interface MDCoreSimulator : NSObject <MDFramework>
@end

@compatibility_alias CoreSimulator MDCoreSimulator;
@compatibility_alias SimDeviceType MDSimDeviceType;
@compatibility_alias SimProfileBundle MDSimProfileBundle;
@compatibility_alias SimServiceContext MDSimServiceContext;
