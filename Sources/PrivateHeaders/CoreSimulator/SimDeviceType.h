@import Foundation;

#include <CoreSimulator/SimDeviceIODeviceTypeInterface-Protocol.h>
#include <CoreSimulator/SimProfileBundle.h>

@interface SimDeviceType : NSObject <SimDeviceIODeviceTypeInterface>

@property (retain, nonatomic) SimProfileBundle *bundle;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (nonatomic) struct CGSize mainScreenSize;
@property (nonatomic) struct CGSize mainScreenDPI;
@property (nonatomic) struct CGSize defaultCanvasSize;
@property (nonatomic) float mainScreenScale;
@property (nonatomic) unsigned int mainScreenColorspace;
@property (copy, nonatomic) NSURL *sensorBarImageURL;
@property (copy, nonatomic) NSArray *supportedArchs;
@property (copy, nonatomic) NSArray *supportedArchStrings;
@property (nonatomic) unsigned int minRuntimeVersion;
@property (nonatomic) unsigned int maxRuntimeVersion;
@property (nonatomic) unsigned int minCoreSimulatorFrameworkVersion;
@property (nonatomic) unsigned int maxCoreSimulatorFrameworkVersion;
@property (nonatomic) unsigned int createByDefaultForRuntimeVersionMin;
@property (nonatomic) unsigned int createByDefaultForRuntimeVersionMax;
@property (nonatomic) unsigned int pairByDefaultForRuntimeVersionMin;
@property (nonatomic) unsigned int pairByDefaultForRuntimeVersionMax;
@property (copy, nonatomic) NSString *springBoardConfigName;
@property (copy, nonatomic) NSString *productClass;
@property (copy, nonatomic) NSArray *supportedProductFamilyIDs;
@property (copy, nonatomic) NSDictionary *environment_extra;
@property (copy, nonatomic) NSArray *aliases;
@property (copy, nonatomic) NSDictionary *supportedFeatures;
@property (copy, nonatomic) NSDictionary *supportedFeaturesConditionalOnRuntime;
@property (retain, nonatomic) NSString *chromeIdentifier;
@property (retain, nonatomic) NSString *userInterfaceIdentifier;
@property (readonly, nonatomic) int productFamilyID;
@property (readonly, nonatomic) NSString *productFamily;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSObject <OS_dispatch_queue> *memoizableSerializerQueue;

- (id)initWithBundle:(id)bundle error:(id *)error;
- (id)bundlePath;
- (id)environment;
- (BOOL)supportsFeature:(id)feature;
- (BOOL)supportsFeatureConditionally:(id)conditionally;
- (long long)compare:(id)compare;
- (Class)deviceClass;
@end
