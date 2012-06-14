/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRXMLNode.h"

@class BRXMLElement;

__attribute__((visibility("hidden")))
@interface BRXMLDocument : BRXMLNode {
	BRXMLElement *_rootElement;	// 4 = 0x4
}
@property(retain, nonatomic) BRXMLElement *rootElement;	// G=0x34efdd; S=0x34f169; 
- (id)init;	// 0x34ed61
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x34e991
- (id)initWithRootElement:(id)rootElement;	// 0x34ed8d
- (id)initWithXMLString:(id)xmlstring options:(unsigned)options error:(id *)error;	// 0x34ef59
- (id)XMLData;	// 0x34f321
- (void)dealloc;	// 0x34ef91
- (id)elementById:(id)anId;	// 0x146a15
- (id)makeElementNamed:(id)named;	// 0x34f4b1
// declared property getter: - (id)rootElement;	// 0x34efdd
// declared property setter: - (void)setRootElement:(id)element;	// 0x34f169
@end

