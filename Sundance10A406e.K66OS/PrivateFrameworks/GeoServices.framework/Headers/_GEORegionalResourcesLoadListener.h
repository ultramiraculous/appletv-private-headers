/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesLoadListener : NSObject {
	id _progress;	// 4 = 0x4
	id _finished;	// 8 = 0x8
	id _error;	// 12 = 0xc
	GEOTileKeyList *_originalList;	// 16 = 0x10
	GEOTileKeyList *_satisfiedList;	// 20 = 0x14
	CFRunLoopRef _runLoop;	// 24 = 0x18
}
@property(copy, nonatomic) id error;	// G=0x3799cbc5; S=0x37937ff9; @synthesize=_error
@property(copy, nonatomic) id finished;	// G=0x379394c9; S=0x37937fe5; @synthesize=_finished
@property(retain, nonatomic) GEOTileKeyList *originalList;	// G=0x37939239; S=0x37938009; @synthesize=_originalList
@property(copy, nonatomic) id progress;	// G=0x379392b5; S=0x37937fd1; @synthesize=_progress
@property(readonly, assign, nonatomic) CFRunLoopRef runLoop;	// G=0x379392c9; @synthesize=_runLoop
@property(retain, nonatomic) GEOTileKeyList *satisfiedList;	// G=0x3799cbd9; S=0x37938019; @synthesize=_satisfiedList
- (id)initWithRunLoop:(CFRunLoopRef)runLoop;	// 0x37937f81
- (void)addSatisfiedKey:(const GEOTileKey *)key;	// 0x37939249
- (void)dealloc;	// 0x37939545
// declared property getter: - (id)error;	// 0x3799cbc5
// declared property getter: - (id)finished;	// 0x379394c9
// declared property getter: - (id)originalList;	// 0x37939239
// declared property getter: - (id)progress;	// 0x379392b5
// declared property getter: - (CFRunLoopRef)runLoop;	// 0x379392c9
// declared property getter: - (id)satisfiedList;	// 0x3799cbd9
// declared property setter: - (void)setError:(id)error;	// 0x37937ff9
// declared property setter: - (void)setFinished:(id)finished;	// 0x37937fe5
// declared property setter: - (void)setOriginalList:(id)list;	// 0x37938009
// declared property setter: - (void)setProgress:(id)progress;	// 0x37937fd1
// declared property setter: - (void)setSatisfiedList:(id)list;	// 0x37938019
@end
