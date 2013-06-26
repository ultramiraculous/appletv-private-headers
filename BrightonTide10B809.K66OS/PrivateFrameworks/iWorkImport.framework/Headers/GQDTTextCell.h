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
- (void)dealloc;	// 0x368ca3e1
- (id)layoutStorage;	// 0x368ca455
- (int)readContentForTCell:(xmlTextReader *)tcell;	// 0x368ca49d
- (int)readContentForTextCell:(xmlTextReader *)textCell;	// 0x368ca465
- (CFStringRef)stringValue;	// 0x368ca445
@end
