@import Foundation;

@protocol SimDeviceIODeviceTypeInterface

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *capabilities;
@property (readonly, nonatomic) NSURL *framebufferMaskURL;
@property (readonly, nonatomic) NSString *chromeIdentifier;
@property (readonly, nonatomic) float mainScreenScale;
@property (readonly, nonatomic) struct CGSize mainScreenSize;
@property (readonly, nonatomic) struct CGSize mainScreenDPI;
@property (readonly, nonatomic) unsigned int mainScreenColorspace;
@property (readonly, nonatomic) struct CGSize defaultCanvasSize;
@property (readonly, nonatomic) unsigned int minRuntimeVersion;
@property (readonly, nonatomic) unsigned int maxRuntimeVersion;
@property (readonly, nonatomic) NSURL *bundleURL;

- (BOOL)supportsFeature:(id)feature;
- (BOOL)supportsFeatureConditionally:(id)conditionally;
@end
