/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString;

@interface FTProfileAuthenticationMessage : FTProfileMessage <NSCopying> {
    NSString *_username;
    NSString *_password;
    NSString *_responseProfileID;
    NSString *_responseAuthToken;
}

@property(copy) NSString * username;
@property(copy) NSString * password;
@property(copy) NSString * responseProfileID;
@property(copy) NSString * responseAuthorizationToken;


- (id)responseAuthorizationToken;
- (id)responseProfileID;
- (id)bagKey;
- (void)setResponseAuthorizationToken:(id)arg1;
- (void)setResponseProfileID:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)additionalMessageHeaders;
- (BOOL)hasRequiredKeys:(id*)arg1;
- (BOOL)payloadCanBeLogged;
- (id)requiredKeys;
- (void)setPassword:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)password;
- (id)messageBody;

@end