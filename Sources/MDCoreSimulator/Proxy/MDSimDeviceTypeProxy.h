@import Foundation;

#import <MDCoreSimulator/SimDeviceTypeProtocol.h>

@interface MDSimDeviceTypeProxy : NSProxy <SimDeviceTypeProtocol>

- (nonnull instancetype)initWithTarget:(nonnull NSObject <SimDeviceTypeProtocol> *)target;

@end
