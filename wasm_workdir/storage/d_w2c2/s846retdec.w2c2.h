#ifndef s846retdec_H
#define s846retdec_H

#include "w2c2_base.h"

typedef struct s846retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s846retdecInstance;

void f0(s846retdecInstance*);

void f1(s846retdecInstance*);

U32 f2(s846retdecInstance*);

void f3(s846retdecInstance*,U32);

U32 f4(s846retdecInstance*,U32,U32,U32);

void f5(s846retdecInstance*,U32,U32,U32,U32,U32);

void f6(s846retdecInstance*,U32);

void f7(s846retdecInstance*,U32,U32,U32);

void f8(s846retdecInstance*,U32,U32,U32);

void s846retdec____wasm_call_ctors(s846retdecInstance*i);

void s846retdec____wasm_apply_data_relocs(s846retdecInstance*i);

U32 s846retdec_func_1(s846retdecInstance*i);

void s846retdec_call_cb(s846retdecInstance*i,U32 l0);

void s846retdecInstantiate(s846retdecInstance* instance, void* resolve(const char* module, const char* name));

void s846retdecFreeInstance(s846retdecInstance* instance);

#endif /* s846retdec_H */

