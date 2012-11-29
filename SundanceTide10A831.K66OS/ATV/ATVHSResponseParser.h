/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataClient, NSData;

__attribute__((visibility("hidden")))
@interface ATVHSResponseParser : XXUnknownSuperclass {
	char *_bytePtr;	// 4 = 0x4
	unsigned long _byteOffset;	// 8 = 0x8
	unsigned long _dataLength;	// 12 = 0xc
	NSData *_responseData;	// 16 = 0x10
	ATVDataClient *_dataClient;	// 20 = 0x14
}
@property(assign, nonatomic) ATVDataClient *dataClient;	// G=0xe882d; S=0xe883d; @synthesize=_dataClient
@property(retain, nonatomic) NSData *responseData;	// G=0xe880d; S=0xe881d; @synthesize=_responseData
- (id)initWithResponse:(id)response dataClient:(id)client;	// 0xe78c9
// declared property getter: - (id)dataClient;	// 0xe882d
- (void)dealloc;	// 0xe7929
- (unsigned long)intValueForCode:(unsigned long)code;	// 0xe8795
- (id)parseDAAPResponseWithQuery:(id)query;	// 0xe7a51
- (id)parseDPAPResponseWithQuery:(id)query;	// 0xe84f5
- (id)parseWithQuery:(id)query;	// 0xe7975
// declared property getter: - (id)responseData;	// 0xe880d
// declared property setter: - (void)setDataClient:(id)client;	// 0xe883d
// declared property setter: - (void)setResponseData:(id)data;	// 0xe881d
- (unsigned long)unsignedIntValue;	// 0xe876d
@end
