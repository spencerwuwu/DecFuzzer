#ifndef s825r2_H
#define s825r2_H

#include "w2c2_base.h"

typedef struct s825r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s825r2Instance;

void f0(s825r2Instance*);

void f1(s825r2Instance*);

U32 f2(s825r2Instance*);

void f3(s825r2Instance*,U32);

U32 f4(s825r2Instance*,U32,U32,U32,U32);

void f5(s825r2Instance*,U32,U32,U32,U32,U32);

void f6(s825r2Instance*,U32);

void f7(s825r2Instance*,U32,U32,U32);

void f8(s825r2Instance*,U32,U32,U32);

void s825r2____wasm_call_ctors(s825r2Instance*i);

void s825r2____wasm_apply_data_relocs(s825r2Instance*i);

U32 s825r2_func_1(s825r2Instance*i);

void s825r2_call_cb(s825r2Instance*i,U32 l0);

void s825r2Instantiate(s825r2Instance* instance, void* resolve(const char* module, const char* name));

void s825r2FreeInstance(s825r2Instance* instance);

#endif /* s825r2_H */

