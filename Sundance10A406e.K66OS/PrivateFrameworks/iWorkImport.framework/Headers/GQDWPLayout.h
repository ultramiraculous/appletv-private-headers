/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDWPBlockList.h"

@class GQDSStyle;

@interface GQDWPLayout : GQDWPBlockList {
	GQDSStyle *mLayoutStyle;	// 8 = 0x8
}
- (void)dealloc;	// 0x32465f65
- (id)layoutStyle;	// 0x32465fb1
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x32465fc1
@end

