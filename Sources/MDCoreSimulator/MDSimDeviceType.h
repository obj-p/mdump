@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@protocol SimDeviceTypeProtocol

@property (retain, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *modelIdentifier;

@end

@interface MDSimDeviceType : NSProxy <SimDeviceTypeProtocol>

- (instancetype)init;

@end

@compatibility_alias SimDeviceType MDSimDeviceType;

NS_ASSUME_NONNULL_END
