#import <Foundation/Foundation.h>

@class SimProfileBundle;

@protocol SimDeviceTypeProtocol

@property (retain, nonatomic, nullable) NSBundle *bundle; // TODO: this is a SimProfileBundle
@property (copy, nonatomic, nullable) NSString *modelIdentifier;

- (nullable instancetype)initWithBundle:(nonnull NSBundle *)bundle error:(NSError * _Nullable * _Nullable)error;

@end
