/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRXMLSchema : XXUnknownSuperclass {
	xmlSchema *_schema;	// 4 = 0x4
}
@property(assign, nonatomic) xmlSchema *schema;	// G=0x398431; S=0x398441; @synthesize=_schema
- (id)initWithSchemaData:(id)schemaData;	// 0x397b09
- (BOOL)_validateWithError:(id *)error withBlock:(id)block;	// 0x397f0d
- (void)dealloc;	// 0x397e6d
// declared property getter: - (xmlSchema *)schema;	// 0x398431
// declared property setter: - (void)setSchema:(xmlSchema *)schema;	// 0x398441
- (BOOL)validateDocument:(id)document error:(id *)error;	// 0x3980b1
- (BOOL)validateElement:(id)element error:(id *)error;	// 0x398271
@end
