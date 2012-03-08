/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDTCell.h"
#import "iWorkImport-Structs.h"

@class GQDWPLayoutStorage;

__attribute__((visibility("hidden")))
@interface GQDTTextCell : GQDTCell {
@private
	CFStringRef mStringValue;	// 16 = 0x10
	GQDWPLayoutStorage *mLayoutStorage;	// 20 = 0x14
}
- (void)dealloc;	// 0x359882cd
- (id)layoutStorage;	// 0x359881b9
- (int)readContentForTCell:(xmlTextReader *)tcell;	// 0x3598858d
- (int)readContentForTextCell:(xmlTextReader *)textCell;	// 0x35988555
- (CFStringRef)stringValue;	// 0x359881a9
@end
