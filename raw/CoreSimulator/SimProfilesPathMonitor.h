//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimProfilesPathMonitor_h
#define SimProfilesPathMonitor_h
@import Foundation;

#include "SimNotificationManagerToken.h"
#include "SimServiceContext.h"

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SimProfilesPathMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (retain, nonatomic) NSMutableArray *leafMonitorSources;
@property (retain, nonatomic) NSMutableArray *parentMonitorSources;
@property (retain, nonatomic) NSMutableDictionary *monitoredPathsDict;
@property (weak, nonatomic) SimServiceContext *serviceContext;
@property (nonatomic) SimNotificationManagerToken *volumeManagerToken;
@property (readonly, nonatomic) NSArray *monitoredPaths;

/* class methods */
+ (id)profilesPathMonitorForContext:(id)context;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)monitorDefaultProfilePaths;
- (void)monitorProfilesPath:(id)path;
- (void)fence;
- (void)_monitorProfilesPath:(id)path;
- (void)_monitorProfilesParentDirectory:(int)directory nextPathComponent:(id)component path:(id)path;
- (void)_monitorProfilesDirectory:(int)directory path:(id)path;
- (void)_monitorProfilesDirectory:(int)directory path:(id)path forSubDirectory:(id)directory updateBlock:(id /* block */)block;
- (void)_monitorProfilesSubDirectory:(int)directory path:(id)path updateBlock:(id /* block */)block;
- (void)_diskWillUnmount:(id)unmount;
@end

#endif /* SimProfilesPathMonitor_h */