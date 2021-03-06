/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSString, NSFileHandle, NSMutableArray;

@interface ASParseContext : NSObject {
	NSMutableArray *_dataBuffers;	// 4 = 0x4
	unsigned _offsetIntoFirstData;	// 8 = 0x8
	long long _curOffset;	// 12 = 0xc
	int _codePage;	// 20 = 0x14
	NSString *_parseErrorReason;	// 24 = 0x18
	BOOL _moreDataExpected;	// 28 = 0x1c
	int _dataGeneration;	// 32 = 0x20
	long long _expectedTotalBytesCount;	// 36 = 0x24
	long long _currentBytesReceivedCount;	// 44 = 0x2c
	unsigned _lastFoundBufferWithoutLineEnding;	// 52 = 0x34
	unsigned _numTokensInBuffersWithoutLineEndings;	// 56 = 0x38
	BOOL _lastLookedAtBufferHadStringEndPrefix;	// 60 = 0x3c
	BOOL _keepPreviousData;	// 61 = 0x3d
	NSMutableArray *_bypassedDataBuffers;	// 64 = 0x40
	NSFileHandle *_logFileHandle;	// 68 = 0x44
	NSString *_logFilePath;	// 72 = 0x48
	int _streamingState;	// 76 = 0x4c
}
@property(assign) int codePage;	// G=0x34b9e171; S=0x34b9e185; @synthesize=_codePage
@property(readonly, assign) long long curOffset;	// G=0x34b9e13d; @synthesize=_curOffset
@property(readonly, assign) long long currentBytesReceivedCount;	// G=0x34b9e285; @synthesize=_currentBytesReceivedCount
@property(assign) int dataGeneration;	// G=0x34b9e1f1; S=0x34b9e205; @synthesize=_dataGeneration
@property(assign) long long expectedTotalBytesCount;	// G=0x34b9e21d; S=0x34b9e251; @synthesize=_expectedTotalBytesCount
@property(assign) BOOL keepPreviousData;	// G=0x34b9e2d9; S=0x34b9e2f1; @synthesize=_keepPreviousData
@property(assign) BOOL moreDataExpected;	// G=0x34b9e1c1; S=0x34b9e1d9; @synthesize=_moreDataExpected
@property(retain) NSString *parseErrorReason;	// G=0x34b9e19d; S=0x34b9e1b1; @synthesize=_parseErrorReason
@property(assign, nonatomic) int streamingState;	// G=0x34b9e2b9; S=0x34b9e2c9; @synthesize=_streamingState
+ (id)_logQueue;	// 0x34b9cb59
- (id)init;	// 0x34b9cb85
- (void)_logBlobChunk:(id)chunk;	// 0x34b9da41
- (void)_moveLogFileContentsAtPath:(id)path;	// 0x34b9cd71
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)nextOpaqueDataCheckNumTokens;	// 0x34b9df79
- (void)addData:(id)data;	// 0x34b9db91
- (BOOL)advanceOffsetByAmount:(unsigned)amount;	// 0x34b9d911
- (BOOL)advanceOffsetByAmount:(unsigned)amount retainLastToken:(BOOL)token;	// 0x34b9d745
- (char *)bufferForLength:(unsigned)length shouldFree:(BOOL *)free;	// 0x34b9d595
- (id)bufferWithAllData;	// 0x34b9d491
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned)currentByte;	// 0x34b9ddf5
// declared property getter: - (int)codePage;	// 0x34b9e171
// declared property getter: - (long long)curOffset;	// 0x34b9e13d
- (unsigned char)currentByte;	// 0x34b9dc69
// declared property getter: - (long long)currentBytesReceivedCount;	// 0x34b9e285
// declared property getter: - (int)dataGeneration;	// 0x34b9e1f1
- (void)dealloc;	// 0x34b9cf85
// declared property getter: - (long long)expectedTotalBytesCount;	// 0x34b9e21d
- (long)goodSizeForBuffer;	// 0x34b9d411
- (BOOL)hasNumberOfTokensRemaining:(unsigned)tokensRemaining;	// 0x34b9d039
- (void)invalidateBuffers;	// 0x34b9e0c5
// declared property getter: - (BOOL)keepPreviousData;	// 0x34b9e2d9
// declared property getter: - (BOOL)moreDataExpected;	// 0x34b9e1c1
- (unsigned char)nextByte;	// 0x34b9deed
- (int)numTokensForNextOpaqueData;	// 0x34b9e049
- (int)numTokensForNextString;	// 0x34b9df05
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int *)terminator;	// 0x34b9e05d
- (int)numberOfBytesUntilStringEnd:(char *)bytesUntilStringEnd searchStringLength:(int)length acceptingBufferBits:(BOOL)bits;	// 0x34b9d0f9
// declared property getter: - (id)parseErrorReason;	// 0x34b9e19d
- (void)resetToZeroOffset;	// 0x34b9d929
// declared property setter: - (void)setCodePage:(int)page;	// 0x34b9e185
// declared property setter: - (void)setDataGeneration:(int)generation;	// 0x34b9e205
// declared property setter: - (void)setExpectedTotalBytesCount:(long long)count;	// 0x34b9e251
// declared property setter: - (void)setKeepPreviousData:(BOOL)data;	// 0x34b9e2f1
// declared property setter: - (void)setMoreDataExpected:(BOOL)expected;	// 0x34b9e1d9
// declared property setter: - (void)setParseErrorReason:(id)reason;	// 0x34b9e1b1
- (void)setShouldLog:(BOOL)log;	// 0x34b9cbd1
// declared property setter: - (void)setStreamingState:(int)state;	// 0x34b9e2c9
// declared property getter: - (int)streamingState;	// 0x34b9e2b9
@end

