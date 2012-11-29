/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSString, NSFileHandle, NSRegularExpression, NSLock;

@interface MZLogger : NSObject {
	NSString *_auxPath;	// 4 = 0x4
	NSFileHandle *_fileHandle;	// 8 = 0x8
	NSString *_filter;	// 12 = 0xc
	NSString *_runtimeOverride;	// 16 = 0x10
	int _pid;	// 20 = 0x14
	NSString *_procName;	// 24 = 0x18
	NSRegularExpression *_runtimeOverrideRegex;	// 28 = 0x1c
	NSLock *_lock;	// 32 = 0x20
}
@property(retain) NSString *auxPath;	// G=0x364d753d; S=0x364d742d; converted property
@property(copy, nonatomic) NSString *filter;	// G=0x364d7ba5; S=0x364d7bb9; @synthesize=_filter
@property(copy) NSString *runtimeOverride;	// G=0x364d7bc9; S=0x364d7bdd; @synthesize=_runtimeOverride
+ (id)sharedLogger;	// 0x364d6d49
- (id)init;	// 0x364d6d81
- (void)_updateSettingsFromPreferences:(id)preferences;	// 0x364d71a5
- (void)addRuntimeOverride:(id)override;	// 0x364d7ab1
// converted property getter: - (id)auxPath;	// 0x364d753d
- (void)dealloc;	// 0x364d734d
// declared property getter: - (id)filter;	// 0x364d7ba5
- (void)logFile:(const char *)file lineNumber:(int)number format:(id)format;	// 0x364d7721
- (void)logFunction:(const char *)function format:(id)format;	// 0x364d781d
- (void)logString:(id)string;	// 0x364d78f9
- (void)performLoggingBlock:(id)block;	// 0x364d76dd
- (void)removeRuntimeOverride:(id)override;	// 0x364d7b55
// declared property getter: - (id)runtimeOverride;	// 0x364d7bc9
// converted property setter: - (void)setAuxPath:(id)path;	// 0x364d742d
// declared property setter: - (void)setFilter:(id)filter;	// 0x364d7bb9
// declared property setter: - (void)setRuntimeOverride:(id)override;	// 0x364d7bdd
- (BOOL)shouldOverrideCondition:(id)condition file:(id)file;	// 0x364d754d
@end
