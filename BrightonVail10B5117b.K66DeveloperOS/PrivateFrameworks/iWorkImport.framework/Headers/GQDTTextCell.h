/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDTCell.h"

@class GQDWPLayoutStorage;

@interface GQDTTextCell : GQDTCell {
	CFStringRef mStringValue;	// 16 = 0x10
	GQDWPLayoutStorage *mLayoutStorage;	// 20 = 0x14
}
- (void)dealloc;	// 0x36aa33e1
- (id)layoutStorage;	// 0x36aa3455
- (int)readContentForTCell:(xmlTextReader *)tcell;	// 0x36aa349d
- (int)readContentForTextCell:(xmlTextReader *)textCell;	// 0x36aa3465
- (CFStringRef)stringValue;	// 0x36aa3445
@end

