#ifndef s87retdec_H
#define s87retdec_H

#include "w2c2_base.h"

typedef struct s87retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s87retdecInstance;

void f0(s87retdecInstance*);

void f1(s87retdecInstance*);

U32 f2(s87retdecInstance*);

void f3(s87retdecInstance*,U32);

U32 f4(s87retdecInstance*,U32,U32,U32);

void f5(s87retdecInstance*,U32,U32,U32,U32,U32);

void f6(s87retdecInstance*,U32);

void f7(s87retdecInstance*,U32,U32,U32);

void f8(s87retdecInstance*,U32,U32,U32);

void s87retdec____wasm_call_ctors(s87retdecInstance*i);

void s87retdec____wasm_apply_data_relocs(s87retdecInstance*i);

U32 s87retdec_func_1(s87retdecInstance*i);

void s87retdec_call_cb(s87retdecInstance*i,U32 l0);

void s87retdecInstantiate(s87retdecInstance* instance, void* resolve(const char* module, const char* name));

void s87retdecFreeInstance(s87retdecInstance* instance);

#endif /* s87retdec_H */

