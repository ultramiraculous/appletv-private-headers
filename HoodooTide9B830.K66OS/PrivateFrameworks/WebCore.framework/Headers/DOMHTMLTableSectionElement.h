/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLCollection, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLTableSectionElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x35928251; S=0x359285d1; 
@property(copy) NSString *ch;	// G=0x35928331; S=0x35928715; 
@property(copy) NSString *chOff;	// G=0x35928411; S=0x35928859; 
@property(readonly, retain) DOMHTMLCollection *rows;	// G=0x35928ae1; 
@property(copy) NSString *vAlign;	// G=0x359284f1; S=0x3592899d; 
// declared property getter: - (id)align;	// 0x35928251
// declared property getter: - (id)ch;	// 0x35928331
// declared property getter: - (id)chOff;	// 0x35928411
- (void)deleteRow:(int)row;	// 0x35928d7d
- (id)insertRow:(int)row;	// 0x35928c29
// declared property getter: - (id)rows;	// 0x35928ae1
// declared property setter: - (void)setAlign:(id)align;	// 0x359285d1
// declared property setter: - (void)setCh:(id)ch;	// 0x35928715
// declared property setter: - (void)setChOff:(id)off;	// 0x35928859
// declared property setter: - (void)setVAlign:(id)align;	// 0x3592899d
// declared property getter: - (id)vAlign;	// 0x359284f1
@end
