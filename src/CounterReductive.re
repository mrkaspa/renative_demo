open ReactNative;
open Store;
open CustomStyles;

let selector = state => state.counter;

[@react.component]
let make = () => {
  let counter = AppStore.useSelector(selector);
  let dispatch = AppStore.useDispatch();
  <View>
    <Text> {counter->Belt.Int.toString->React.string} </Text>
    <Button title="Inc" onPress={_evt => {dispatch(Increment)}} />
    <Button title="Dec" onPress={_evt => {dispatch(Decrement)}} />
  </View>;
};
