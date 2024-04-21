//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimServiceContext_h
#define SimServiceContext_h
@import Foundation;

#include "OS_xpc_object-Protocol.h"
#include "SimNotificationManagerToken.h"
#include "SimProfilesPathMonitor.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface SimServiceContext : NSObject {
  /* instance variables */
  NSMutableDictionary *_allDeviceSets;
  NSMutableDictionary *_supportedChromeBundles;
  NSMutableDictionary *_supportedUserInterfaceBundles;
}

@property (readonly, nonatomic) NSDictionary *preferredRuntimeBuildBySDKBuild;
@property (readonly, nonatomic) NSDictionary *userOverriddenRuntimeBuilds;
@property (retain, nonatomic) NSObject<OS_xpc_object> *serviceConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceConnectionQueue;
@property (retain, nonatomic) NSDate *lastConnectionTime;
@property (nonatomic) long long connectionType;
@property (retain, nonatomic) SimProfilesPathMonitor *profileMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *profileQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *volumeNotificationQueue;
@property (nonatomic) BOOL initialized;
@property (nonatomic) BOOL valid;
@property (retain, nonatomic) NSString *invalidationReason;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *allDeviceSetsQueue;
@property (retain, nonatomic) NSString *developerDir;
@property (retain, nonatomic) SimNotificationManagerToken *volumeNotificationToken;
@property (readonly, nonatomic) NSArray *supportedDeviceTypes;
@property (readonly, nonatomic) NSArray *bundledDeviceTypes;
@property (readonly, nonatomic) NSDictionary *supportedDeviceTypesByIdentifier;
@property (readonly, nonatomic) NSDictionary *supportedDeviceTypesByAlias;
@property (readonly, nonatomic) NSDictionary *bundledRuntimesByPlatform;
@property (readonly, nonatomic) NSArray *supportedRuntimes;
@property (readonly, nonatomic) NSArray *bundledRuntimes;
@property (readonly, nonatomic) NSDictionary *supportedRuntimesByIdentifier;
@property (readonly, nonatomic) NSDictionary *supportedRuntimesByAlias;

/* class methods */
+ (id)runtimesMatchingOptions:(id)options supportedRuntimes:(id)runtimes;
+ (id)serviceVersionString;
+ (BOOL)currentProcessIsServer;
+ (void)_withSharedServiceContexts:(id /* block */)contexts;
+ (id)standaloneConnectionWithError:(id *)error;
+ (id)loggingConnection;
+ (id)sharedServiceContextForDeveloperDir:(id)dir error:(id *)error;
+ (id)serviceContextForDeveloperDir:(id)dir error:(id *)error;
+ (id)serviceContextForDeveloperDir:(id)dir connectionType:(long long)type error:(id *)error;
+ (BOOL)loadCoreSimulatorServiceWithError:(id *)error;
+ (id)_serverConnectionWithQueue:(id)queue lastConnectionTime:(id *)time eventHandler:(id /* block */)handler error:(id *)error;

/* instance methods */
- (id)runtimesMatchingOptions:(id)options;
- (id)_optionsForPlatformPath:(id)path sdkPath:(id)path allowingFallbacks:(BOOL)fallbacks matchingInternalState:(BOOL)state;
- (id)runtimeMatchingPlatformPath:(id)path sdkPath:(id)path error:(id *)error;
- (id)runtimesExactlyMatchingPlatformPath:(id)path sdkPath:(id)path;
- (id)runtimeMapData;
- (id)_normalizeSDKCanonicalName:(id)name;
- (id)_knownPlatformsAndSDKsWithError:(id *)error;
- (id)runtimeIdentifiersForKnownSDKs;
- (id)_loadPlatformsAndSDKsFromDeveloperDir:(id)dir error:(id *)error;
- (id)findSDKCanonicalNamesForCurrentDeveloperDirWithError:(id *)error;
- (id)findSDKCanonicalNamesForDeveloperDir:(id)dir error:(id *)error;
- (void)_sendAvailabilityChangedNotification;
- (BOOL)setPreferredRuntimeBuildBySDKBuild:(id)sdkbuild error:(id *)error;
- (BOOL)setUserOverrideForSDK:(id)sdk withSDKBuild:(id)sdkbuild useRuntimeBuild:(id)build error:(id *)error;
- (id)userOverriddenRuntimeBuildsForSDK:(id)sdk;
- (id)_evaluateMatchingPolicyForPlatform:(id)platform sdk:(id)sdk preferredMap:(id)map userOverrides:(id)overrides runtimesByAlias:(id)alias bundledRuntimes:(id)runtimes;
- (id)_evaluateRuntimeBuildsForPlatforms:(id)platforms withPreferredMap:(id)map userOverrides:(id)overrides error:(id *)error;
- (id)evaluateRuntimeBuildsForCurrentDeveloperDirWithError:(id *)error;
- (id)evaluateRuntimeBuildsForDeveloperDir:(id)dir error:(id *)error;
- (id)_runtimeMatchingSystemPolicyForIdentifier:(id)identifier;
- (void)_runtimeMatchingRuntimesUpdated;
- (void)handleXPCGetRuntimeMapRequest:(id)request;
- (void)handleXPCSetPreferredRuntimeMapRequest:(id)request;
- (void)handleXPCSetRuntimeMapOverrideRequest:(id)request;
- (void)handleXPCNotificationRuntimeMapUpdated:(id)updated;
- (void)_serverRegisterSendNotificationBlock:(id /* block */)block;
- (void)_sendNotification:(id)notification;
- (id)initWithDeveloperDir:(id)dir connectionType:(long long)type error:(id *)error;
- (BOOL)connectWithError:(id *)error;
- (void)dealloc;
- (id)defaultDeviceSetWithError:(id *)error;
- (id)_defaultDeviceSetIfLoaded;
- (id)deviceSetWithPath:(id)path error:(id *)error;
- (void)_onQueue_removeDeviceSetMatchingVolumeURL:(id)url completionGroup:(id)group deviceSetUnloadedHandler:(id /* block */)handler deviceShutdownHandler:(id /* block */)handler;
- (id)allDeviceSets;
- (void)addProfilesAtPath:(id)path;
- (void)serviceAddProfilesAtPath:(id)path;
- (BOOL)supportedDeviceTypesAddProfilesAtPath:(id)path;
- (BOOL)_onQueue_addSupportedDeviceType:(id)type;
- (void)_onQueue_regenerateDeviceTypeDictionaries;
- (BOOL)_supportedDeviceTypesAddProfilesAtPath:(id)path allowRescan:(BOOL)rescan;
- (id)_loadDeviceTypeProfilesAtPath:(id)path skippingLoadedDeviceTypes:(id)types shouldRescan:(BOOL *)rescan;
- (id)_onQueue_removeDeviceTypeProfilesMatchingVolumeURL:(id)url;
- (BOOL)_onQueue_removeDeletedDeviceTypes;
- (void)_onQueue_removeDeviceTypeFromAllCollections:(id)collections;
- (id)_loadRuntimeProfilesAtPath:(id)path skippingLoadedRuntimes:(id)runtimes shouldRescan:(BOOL *)rescan;
- (BOOL)_onQueue_addSupportedRuntime:(id)runtime;
- (void)_onQueue_regenerateRuntimeDictionaries;
- (BOOL)supportedRuntimesAddProfilesAtPath:(id)path createDefaultDevicesIfNeeded:(BOOL)needed;
- (BOOL)_supportedRuntimesAddProfilesAtPath:(id)path createDefaultDevicesIfNeeded:(BOOL)needed allowRescan:(BOOL)rescan;
- (BOOL)_onQueue_removeDeletedRuntimes;
- (void)_onQueue_removeRuntimeFromAllCollections:(id)collections;
- (id)_onQueue_removeRuntimeProfilesMatchingVolumeURL:(id)url;
- (id)_onQueue_addProfilesForVolumeURL:(id)url;
- (void)addProfilesForDeveloperDir:(id)dir;
- (void)handleReconnectionBookkeeping;
- (void)handleXPCEvent:(id)xpcevent;
- (void)sendRequest:(id)request;
- (BOOL)sendRequest:(id)request reply:(id *)reply error:(id *)error;
- (BOOL)shouldLoadUIBundles;
- (void)supportedChromeBundlesAddProfilesAtPath:(id)path;
- (void)supportedUserInterfaceBundlesAddProfilesAtPath:(id)path;
- (void)_supportedBundlesAddProfilesAtPath:(id)path withSuffix:(id)suffix storage:(id)storage loadBundle:(BOOL)bundle logDescription:(id)description;
- (id)supportedChromeProfileBundles;
- (id)supportedUserInterfaceProfileBundles;
- (id)_supportedBundlesFrom:(id)from;
- (id)_onQueue_removeChromeBundlesMatchingVolumeURL:(id)url;
- (id)_onQueue_removeUserInterfaceBundlesMatchingVolumeURL:(id)url;
- (id)_onQueue_removeBundles:(id)bundles matchingVolumeURL:(id)url;
- (id)_loadProfilesAtPath:(id)path bundleSuffix:(id)suffix classForBundle:(Class)bundle skippingLoadedProfiles:(id)profiles shouldRescan:(BOOL *)rescan;
- (void)ensureProfilesLoadedForRuntimeBundleURL:(id)url deviceTypeBundleURL:(id)url completionQueue:(id)queue completionHandler:(id /* block */)handler;
@end

#endif /* SimServiceContext_h */