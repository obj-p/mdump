@import MDFramework;
@import Foundation;

#import <MDCoreSimulator/MDSimDeviceTypeProxy.h>
#import <MDCoreSimulator/MDSimServiceContextProxy.h>

@interface MDCoreSimulator : NSObject <MDFramework>
@end

@compatibility_alias CoreSimulator MDCoreSimulator;
@compatibility_alias SimDeviceContext MDSimServiceContextProxy;
@compatibility_alias SimDeviceType MDSimDeviceTypeProxy;
