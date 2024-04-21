//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimRuntimeMapData_h
#define SimRuntimeMapData_h
@import Foundation;

#include "SimServiceContext.h"

@class NSDictionary, NSMutableDictionary, NSURL;

@interface SimRuntimeMapData : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  atomic BOOL _needsClearCache;
  NSMutableDictionary *_cachedRuntimeKeys;
}

@property (retain, nonatomic) NSURL *persistenceURL;
@property (retain, nonatomic) SimServiceContext *serviceContext;
@property (retain, nonatomic) NSDictionary *preferredRuntimeBuildBySDKBuild;
@property (retain, nonatomic) NSDictionary *userOverrides;

/* instance methods */
- (id)init;
- (id)initWithServiceContext:(id)context;
- (id)initWithPersistenceURL:(id)url;
- (void)clearCachedData;
- (void)modifyUserOverrides:(id /* block */)overrides;
- (void)handleUpdatedRuntimeMap:(id)map userOverrides:(id)overrides;
- (void)_withLock_saveState;
- (void)_withLock_invalidateCache;
- (id)runtimeLookupKeyForRuntimeIdentifier:(id)identifier evaluateForUncached:(id /* block */)uncached;
@end

#endif /* SimRuntimeMapData_h */