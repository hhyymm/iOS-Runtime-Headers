/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioAddToWishListRequest : RadioRequest {
    int _action;
    SSURLConnectionRequest *_request;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationStringID;
    RadioTrack *_track;
    long long _trackStoreID;
}

@property (nonatomic) int action;
@property (nonatomic, readonly) long long trackStoreID;

- (void).cxx_destruct;
- (int)action;
- (void)cancel;
- (id)init;
- (id)initWithTrack:(id)arg1 station:(id)arg2;
- (id)initWithTrackStoreID:(long long)arg1 stationID:(long long)arg2 stationHash:(id)arg3;
- (id)initWithTrackStoreID:(long long)arg1 stationID:(long long)arg2 stationHash:(id)arg3 stationStringID:(id)arg4;
- (void)setAction:(int)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (long long)trackStoreID;

@end
