#ifndef s941retdec_H
#define s941retdec_H

#include "w2c2_base.h"

typedef struct s941retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s941retdecInstance;

void f0(s941retdecInstance*);

void f1(s941retdecInstance*);

U32 f2(s941retdecInstance*);

void f3(s941retdecInstance*,U32);

U32 f4(s941retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s941retdecInstance*,U32,U32,U32,U32,U32);

void f6(s941retdecInstance*,U32);

void f7(s941retdecInstance*,U32,U32,U32);

void f8(s941retdecInstance*,U32,U32,U32);

void s941retdec____wasm_call_ctors(s941retdecInstance*i);

void s941retdec____wasm_apply_data_relocs(s941retdecInstance*i);

U32 s941retdec_func_1(s941retdecInstance*i);

void s941retdec_call_cb(s941retdecInstance*i,U32 l0);

void s941retdecInstantiate(s941retdecInstance* instance, void* resolve(const char* module, const char* name));

void s941retdecFreeInstance(s941retdecInstance* instance);

#endif /* s941retdec_H */

