#ifndef s322retdec_H
#define s322retdec_H

#include "w2c2_base.h"

typedef struct s322retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s322retdecInstance;

void f0(s322retdecInstance*);

void f1(s322retdecInstance*);

U32 f2(s322retdecInstance*);

void f3(s322retdecInstance*,U32);

U32 f4(s322retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s322retdecInstance*,U32,U32,U32,U32,U32);

void f6(s322retdecInstance*,U32);

void f7(s322retdecInstance*,U32,U32,U32);

void f8(s322retdecInstance*,U32,U32,U32);

void s322retdec____wasm_call_ctors(s322retdecInstance*i);

void s322retdec____wasm_apply_data_relocs(s322retdecInstance*i);

U32 s322retdec_func_1(s322retdecInstance*i);

void s322retdec_call_cb(s322retdecInstance*i,U32 l0);

void s322retdecInstantiate(s322retdecInstance* instance, void* resolve(const char* module, const char* name));

void s322retdecFreeInstance(s322retdecInstance* instance);

#endif /* s322retdec_H */

