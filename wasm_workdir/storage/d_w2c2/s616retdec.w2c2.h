#ifndef s616retdec_H
#define s616retdec_H

#include "w2c2_base.h"

typedef struct s616retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s616retdecInstance;

void f0(s616retdecInstance*);

void f1(s616retdecInstance*);

U32 f2(s616retdecInstance*);

void f3(s616retdecInstance*,U32);

U32 f4(s616retdecInstance*,U32,U32,U32);

void f5(s616retdecInstance*,U32,U32,U32,U32,U32);

void f6(s616retdecInstance*,U32);

void f7(s616retdecInstance*,U32,U32,U32);

void f8(s616retdecInstance*,U32,U32,U32);

void s616retdec____wasm_call_ctors(s616retdecInstance*i);

void s616retdec____wasm_apply_data_relocs(s616retdecInstance*i);

U32 s616retdec_func_1(s616retdecInstance*i);

void s616retdec_call_cb(s616retdecInstance*i,U32 l0);

void s616retdecInstantiate(s616retdecInstance* instance, void* resolve(const char* module, const char* name));

void s616retdecFreeInstance(s616retdecInstance* instance);

#endif /* s616retdec_H */

