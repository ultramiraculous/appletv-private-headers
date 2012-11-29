/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject {
}
@property(readonly, assign) BOOL booleanValue;	// G=0x31e7f6d9; 
@property(readonly, assign) BOOL invalidIteratorState;	// G=0x31e7f909; 
@property(readonly, assign) double numberValue;	// G=0x31e7f3ed; 
@property(readonly, assign) unsigned short resultType;	// G=0x31e7f2ed; 
@property(readonly, assign) DOMNode *singleNodeValue;	// G=0x31e7f7ed; 
@property(readonly, assign) unsigned snapshotLength;	// G=0x31e7fa09; 
@property(readonly, assign) NSString *stringValue;	// G=0x31e7f50d; 
// declared property getter: - (BOOL)booleanValue;	// 0x31e7f6d9
- (void)dealloc;	// 0x31e7f0bd
- (void)finalize;	// 0x31e7f1e9
// declared property getter: - (BOOL)invalidIteratorState;	// 0x31e7f909
- (id)iterateNext;	// 0x31e7fb1d
// declared property getter: - (double)numberValue;	// 0x31e7f3ed
// declared property getter: - (unsigned short)resultType;	// 0x31e7f2ed
// declared property getter: - (id)singleNodeValue;	// 0x31e7f7ed
- (id)snapshotItem:(unsigned)item;	// 0x31e7fc39
// declared property getter: - (unsigned)snapshotLength;	// 0x31e7fa09
// declared property getter: - (id)stringValue;	// 0x31e7f50d
@end
