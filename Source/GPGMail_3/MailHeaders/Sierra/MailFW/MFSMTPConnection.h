//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCConnection.h"

@class MFSMTPAccount, NSMutableArray, NSMutableData, NSString, _MFSMTPEnhancedStatusCode;

@interface MFSMTPConnection : MCConnection
{
    id _lastResponse;	// 8 = 0x8
    NSMutableArray *_serviceExtensions;	// 16 = 0x10
    NSMutableData *_mdata;	// 24 = 0x18
    NSString *_domainName;	// 32 = 0x20
    BOOL _needToSendGreeting;	// 40 = 0x28
    int _lastReplyCode;	// 44 = 0x2c
    _MFSMTPEnhancedStatusCode *_lastStatusCode;	// 48 = 0x30
    double _originalSocketTimeout;	// 56 = 0x38
    double _timeLastCommandWasSent;	// 64 = 0x40
    long long _greeting;	// 72 = 0x48
}

+ (id)log;	// IMP=0x0000000000263612
@property(nonatomic) BOOL needToSendGreeting; // @synthesize needToSendGreeting=_needToSendGreeting;
@property(nonatomic) long long greeting; // @synthesize greeting=_greeting;
@property(nonatomic) int lastReplyCode; // @synthesize lastReplyCode=_lastReplyCode;
@property(nonatomic) double timeLastCommandWasSent; // @synthesize timeLastCommandWasSent=_timeLastCommandWasSent;
@property(nonatomic) double originalSocketTimeout; // @synthesize originalSocketTimeout=_originalSocketTimeout;
@property(readonly, nonatomic) _MFSMTPEnhancedStatusCode *lastStatusCode; // @synthesize lastStatusCode=_lastStatusCode;
- (void).cxx_destruct;	// IMP=0x0000000000267f54
- (long long)sendDatas:(id)arg1;	// IMP=0x000000000026730c
- (long long)rcptTo:(id)arg1;	// IMP=0x0000000000267260
- (long long)mailFrom:(id)arg1;	// IMP=0x00000000002671b4
@property(readonly, nonatomic) unsigned long long maximumMessageBytes;
- (BOOL)_hasParameter:(id)arg1 forKeyword:(id)arg2;	// IMP=0x0000000000266eb1
- (id)_domainName;	// IMP=0x0000000000266c22
- (long long)_sendHELOWithClientDomainName:(id)arg1;	// IMP=0x0000000000266b86
- (long long)_sendEHLOWithClientDomainName:(id)arg1;	// IMP=0x000000000026631d
- (long long)_doHandshakeTryHELOIfEHLOFails:(BOOL)arg1;	// IMP=0x0000000000266137
- (long long)noop;	// IMP=0x00000000002660cb
- (void)_readResponseRange:(struct _NSRange *)arg1 isContinuation:(char *)arg2;	// IMP=0x0000000000265d53
- (long long)_getReply;	// IMP=0x00000000002656ab
- (long long)_sendDataDontLogBytesInRange:(struct _NSRange)arg1;	// IMP=0x0000000000265603
- (long long)_sendCommand:(const char *)arg1 length:(unsigned long long)arg2 argument:(id)arg3 dontLogArgumentRange:(struct _NSRange)arg4 trailer:(unsigned char)arg5;	// IMP=0x00000000002652b1
@property(readonly, copy, nonatomic) NSString *lastResponse;
- (long long)_state;	// IMP=0x00000000002650bb
- (void)quit;	// IMP=0x0000000000265050
- (id)_makeInvalidCredentialsError;	// IMP=0x0000000000264d16
- (id)_getErrorFromFailedAuthentication;	// IMP=0x0000000000264aae
- (BOOL)_authenticateWithSaslClient:(id)arg1;	// IMP=0x00000000002643bf
- (BOOL)authenticate;	// IMP=0x0000000000264369
- (id)authenticationMechanisms;	// IMP=0x0000000000264200
- (BOOL)_completeConnectionWithResult:(BOOL)arg1;	// IMP=0x0000000000263dc4
- (BOOL)_startTLS;	// IMP=0x0000000000263a13
- (BOOL)connectDiscoveringBestSettings:(BOOL)arg1;	// IMP=0x0000000000263930
- (void)_setupConnection;	// IMP=0x00000000002638bf
- (id)errorURLScheme;	// IMP=0x00000000002638a0
@property __weak MFSMTPAccount *account;
- (id)init;	// IMP=0x0000000000263671

@end

