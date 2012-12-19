/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;

@interface DOMMediaList : DOMObject {
}
@property(readonly, assign) unsigned length;	// G=0x3600ef85; 
@property(copy) NSString *mediaText;	// G=0x3600ec0d; S=0x3600edcd; 
- (void)appendMedium:(id)medium;	// 0x3600f32d
- (void)dealloc;	// 0x3600e9dd
- (void)deleteMedium:(id)medium;	// 0x3600f175
- (void)finalize;	// 0x3600eb09
- (id)item:(unsigned)item;	// 0x3600efb5
// declared property getter: - (unsigned)length;	// 0x3600ef85
// declared property getter: - (id)mediaText;	// 0x3600ec0d
// declared property setter: - (void)setMediaText:(id)text;	// 0x3600edcd
@end
